/*Пример использования libcurl, удобная штука. Можно этот файл прикрутить к юзеру, чтобы
получать файл, в котором расположены ссылки*/
#include <string>
#include <cstring>
#include <iostream>
#include "curl/curl.h"
#include <iconv.h>
#include <fstream>
#include <stdlib.h>
#include "md5.h"
using namespace std;
static size_t write_data(char *ptr, size_t size, size_t nmemb, std::string* data){
    if (data){
         data->append(ptr, size*nmemb);
         return size*nmemb;
    }
    else return 0;  
}
//возвращает строку с содержимым файла. Можно сделать запись в файл, но нахуа?
string getFile(){
	char *name="nameone";
	char *nameto="nametwo";
	char hashname[33];
	char hashnameto[33];
	getHash(name,hashname);
	getHash(nameto,hashnameto);
	string h1(hashname);
	string h2(hashnameto);
	CURL *curl;
	CURLcode res;
	curl=curl_easy_init();
	string url="http://url"+h1+h2+".txt";
	string s;
	if (curl) {
		curl_easy_setopt(curl,CURLOPT_URL,url.c_str());
		curl_easy_setopt(curl,CURLOPT_WRITEFUNCTION,write_data);
        curl_easy_setopt(curl,CURLOPT_WRITEDATA,&s);//текстовый файл будет записан в строку s
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
	}
	return s;
}
int main(){
	string ololo=getFile();
	return 0;
}
