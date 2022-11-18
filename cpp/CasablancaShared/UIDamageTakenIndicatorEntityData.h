// Object: UIDamageTakenIndicatorEntityData
// ClassId: 3626
// RuntimeId: 32781
// TypeInfo: 0x0000000144D43450
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDamageTakenIndicatorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 MaxIndicators; // 0x24
        Float32 MaxDisplayTime; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(UIDamageTakenIndicatorEntityData) == 0x30);
}
#pragma pack(pop)