#include "FileManager.h"
FileManager::FileManager()
{
	file.open("output_data.dat");
}
bool FileManager::WriteObjects(Object* tableObjects, unsigned nbObjects)
{
	for(unsigned i = 0; i < nbObjects; ++i)
		file<<tableObjects[i];
	return true;
}
FileManager::~FileManager()
{
	file.close();
}