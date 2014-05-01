#ifndef __FILE_MANAGER__
#define __FILE_MANAGER__
#include <iostream>
#include <fstream>
#include "Object.h"
class FileManager
{
	std::ofstream file;
public:
	FileManager();
	bool WriteObjects(Object* tableObjects, unsigned nbObjects);
	~FileManager();
};
#endif __FILE_MANAGER__