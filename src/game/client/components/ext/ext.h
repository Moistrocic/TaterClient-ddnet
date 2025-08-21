#ifndef EXT_H
#define EXT_H

#include <engine/client/input.h>
#include <engine/keys.h>
#include <functional>
#include <vector>

class CEXT {
	static std::vector<int> ms_vLeftKey;
	static std::vector<int> ms_vRightKey;

	static std::vector<int>* StrMapVector(const char *pStr);

public:
	static void AddMovementKey(const char *pStr, int KeyId);
	static void RemoveMovementKey(const char *pStr, int KeyId);
	static bool LRKeyIsPressed(CInput *pInput);
};

#endif