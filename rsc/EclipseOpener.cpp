#include<windows.h>
main()
{
	SetFileAttributes( "dist", FILE_ATTRIBUTE_HIDDEN );
	system("start \\dist\\eclipseOpener.jar");
	return 0;
}
