// Object: BFCombatAreaCameraProviderEntityData
// ClassId: 2093
// RuntimeId: 33829
// TypeInfo: 0x0000000144D4B770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFCombatAreaCameraProviderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform SuperTransform; // 0x30
        Uint32 Iterations; // 0x70
        Float32 VerticalSafeAreaFactor; // 0x74
        Float32 HorizontalSafeAreaFactor; // 0x78
        Float32 VerticalOffsetFactor; // 0x7C
        Float32 HorizontalOffsetFactor; // 0x80
        Float32 VerticalFov; // 0x84
        Float32 AspectRatio; // 0x88
        char pad_0x8C[0x4];
    }; // 0x90
    static_assert(sizeof(BFCombatAreaCameraProviderEntityData) == 0x90);
}
#pragma pack(pop)