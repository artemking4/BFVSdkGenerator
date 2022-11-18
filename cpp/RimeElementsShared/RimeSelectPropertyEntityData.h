// Object: RimeSelectPropertyEntityData
// ClassId: 3127
// RuntimeId: 65027
// TypeInfo: 0x0000000144F2B510
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

namespace RimeElementsShared {
    class RimeSelectPropertyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> Inputs; // 0x28
        Int32 InputSelect; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(RimeSelectPropertyEntityData) == 0x38);
}