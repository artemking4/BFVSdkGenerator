// Object: BFUIMapList
// ClassId: 1226
// RuntimeId: 49326
// TypeInfo: 0x0000000144D11AC0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIMapList : public Core::DataContainer {
        Array<CString> Maps; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIMapList) == 0x20);
}
#pragma pack(pop)