// Object: PersistenceGameData
// ClassId: 624
// RuntimeId: 16192
// TypeInfo: 0x0000000144E759C0
#include "../Core/Asset.h"

#pragma pack(push, 8)
namespace GameShared {
    class PersistenceGameData : public Core::Asset {
        Array<Core::Asset> Assets; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceGameData) == 0x28);
}
#pragma pack(pop)