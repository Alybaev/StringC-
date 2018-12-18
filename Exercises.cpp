#include<iostream>
#include "Exercises.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int strleng(const char* p) 
{
 int count = 0;
 while (*p) { ++count; ++p; }
 return count;
}
const char* findx(const char* s, const char* x){
	const char* ans = s;
	int sizeOfS = strleng(s);
	const char* p = x;
	const char* p2 = s;
	int similarities = 0;
	while(*p2){
		similarities = 0;
		while(*p == *p2){
			if(similarities == 0){	
				ans = p2;
			}
			similarities++;
			if(p2 == &s[sizeOfS - 1]){
				goto l1;
			}
		
			
			p++;
			p2++;
		}
		if(similarities == strleng(x)){
			return ans;
		}
		p = x;
		if(similarities == 0){
			p2++;
		}
		
		
	}
	
	l1:
	if(similarities == strleng(x)){
		return ans;
	}
	return nullptr;
	
}
int strComp(const char* s1, const char* s2){
	int s1Size = strleng(s1);
	int s2Size = strleng(s2);
	int minSize = s1Size;
	if(s1Size > s2Size){
		minSize = s2Size;
	}
	const char* p1 = s1;
	const char* p2 = s2;
	int ans = 0;
	while(*p1){
		if(*p1 > *p2){
			return 1;
		}
		if(*p1 < *p2){
			return -1;
		}
		if(p1 == &s1[minSize - 1]){
			goto l1;
		}
		p1++;
		p2++;
	}
	l1:
	if(s1Size > s2Size){
		return 1;
	}
	if(s1Size < s2Size){
		return -1;
	}
	return 0;
	
}
const char* strCopy(char* dest,const char* s){
	
	int size = strleng(s);
	char* newDest = (char*)malloc(sizeof(char) * size);
	const char* p = s;
	int i = 0;
	while(p != s + size){
		newDest[i] = *p;
		p++;
		i++;
	}

	
	return newDest;
}
const char* check(const char* s, const char* x){
	while(*s){
		if(*s == *x){
			return s;
		}
		s++;
	}
	return nullptr;
}

const char* cat_dot(const char* s1, const char* s2,const char* separatator){
	int s2Length = strleng(s2);
	int separatatorLength = strleng(separatator);
	int s1Length = strleng(s1);
	int length = s2Length + separatatorLength + s1Length ;
	char* ans = new char[length];
	

	int i = 0;
	for(int j = 0; j < s1Length;j++){
		ans[i] = *s1;
		i++;
	
		s1++;
		
		
	}
	
	for(int j = 0; j < separatatorLength;j++){
		ans[i] = *separatator;
		i++;
	
		separatator++;
	}
	
	/*
	for(int j = 0; j < s2Length;j++){
		ans[i] = *s2;
		i++;
		s2++;
	}
	*/
	return ans;
}
int main(void){
	char s1[1];
	const char* res = strCopy(s1,"Lo");
	while(*res){
		cout << *res;
		res++;
	}
	return 0;
	
}	

