#ifndef DEFINES_H
#define DEFINES_H

#define _STR(x) #x
#define STR(x) _STR(x)
#define TODO(x) __pragma(message("TODO: "_STR(x) " :: " __FILE__ "@"STR(__LINE__)))

#define SAFE_DELETE(x) { if(x) delete (x);(x)=NULL; }
#define SAFE_DELETE_ARRAY(x) { if(x) delete [] (x);(x)=NULL;  }

// safe delete LIST of pointers
#define SAFE_DELETE_PLIST(x) { for(int i=0;i<(x).GetSize();i++) {SAFE_DELETE((x)[i])} (x).Erase(); }

#define SAFE_RELEASE(x) { if(x) (x)->Release();(x)=NULL; }

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS 1
#endif


#endif