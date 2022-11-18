// Object: FovEffectEntityData
// ClassId: 2769
// RuntimeId: 48091
// TypeInfo: 0x0000000144D4B070
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../GameShared/FOVTransitionType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FovEffectEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 FOV; // 0x24
        Float32 Delay; // 0x28
        Float32 FadeTime; // 0x2C
        GameShared::FOVTransitionType TransitionType; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(FovEffectEntityData) == 0x38);
}
#pragma pack(pop)