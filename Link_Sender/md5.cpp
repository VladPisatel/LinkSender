#include "md5.h"
int main() {
	//оно работает
    char res[33];
	char msg[1024];
	cin>>msg;
	//возвращает мд5 msg в res
	getHash(msg,res);
	cout<<res;
	return 0;
}
