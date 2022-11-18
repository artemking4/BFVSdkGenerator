// Object: ChrCharEntityData
// ClassId: 2473
// RuntimeId: 39183
// TypeInfo: 0x0000000144C42F70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Casablanca/ChrCharEntityT.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ChrCharEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString In; // 0x28
        Casablanca::ChrCharEntityT T; // 0x30
        char pad_0x34[0x4];
        CString U; // 0x38
        CString V; // 0x40
        Int32 W; // 0x48
        Int32 X; // 0x4C
        Boolean S; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(ChrCharEntityData) == 0x58);
}
#pragma pack(pop)