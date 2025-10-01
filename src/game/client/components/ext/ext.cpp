#include "ext.h"

#include <algorithm>
#include <cstring>

std::vector<int> CEXT::ms_vLeftKey;
std::vector<int> CEXT::ms_vRightKey;

std::vector<int> *CEXT::StrMapVector(const char *pStr) {
    if (strcmp(pStr, "+left") == 0) {
        return &ms_vLeftKey;
    }
    return &ms_vRightKey;
}

void CEXT::AddMovementKey(const char *pStr, int KeyId) {
    std::vector<int>* pKeyVector = StrMapVector(pStr);
    if (!pKeyVector) return;
    if (pKeyVector->size() >= KEY_LAST) {
        return;
    }
    pKeyVector->push_back(KeyId);
}

void CEXT::RemoveMovementKey(const char *pStr, int KeyId) {
	std::vector<int> *pKeyVector = StrMapVector(pStr);
	pKeyVector->erase(std::remove(pKeyVector->begin(), pKeyVector->end(), KeyId), pKeyVector->end());
}

bool CEXT::LRKeyIsPressed(CInput *pInput) {
    if (!pInput) return false;
	bool isLeftKeyPressed = std::any_of(ms_vLeftKey.begin(), ms_vLeftKey.end(), [pInput](int key) {
		return pInput->KeyIsPressed(key);
	});
	bool isRightKeyPressed = std::any_of(ms_vRightKey.begin(), ms_vRightKey.end(), [pInput](int key) {
		return pInput->KeyIsPressed(key);
	});
	return isLeftKeyPressed || isRightKeyPressed;
}

void CEXT::IncrementIfOdd(int *pNumber) {
    if (*pNumber & 1) {
	    (*pNumber)++;
    }
}