// Object: AssertEntityData
// ClassId: 2066
// RuntimeId: 1829
// TypeInfo: 0x0000000144E8F960
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class AssertEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Text; // 0x28
        Boolean Pass; // 0x30
        Boolean TriggerOnce; // 0x31
        Boolean TriggerOnPassChanged; // 0x32
        Boolean EnabledInGameview; // 0x33
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(AssertEntityData) == 0x38);
}
#pragma pack(pop)