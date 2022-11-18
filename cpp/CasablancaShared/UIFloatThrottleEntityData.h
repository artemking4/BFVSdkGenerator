// Object: UIFloatThrottleEntityData
// ClassId: 3705
// RuntimeId: 15011
// TypeInfo: 0x0000000144D1F870
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIFloatThrottleEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 ThresholdValue; // 0x24
        Float32 InMin; // 0x28
        Float32 InMax; // 0x2C
        Float32 In; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIFloatThrottleEntityData) == 0x38);
}
#pragma pack(pop)