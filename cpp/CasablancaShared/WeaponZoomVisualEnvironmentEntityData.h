// Object: WeaponZoomVisualEnvironmentEntityData
// ClassId: 3919
// RuntimeId: 38962
// TypeInfo: 0x0000000144CFB650
#include "../Entity/EntityData.h"
#include "../WorldSim/VisualEnvironmentBlueprint.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeaponZoomVisualEnvironmentEntityData : public Entity::EntityData {
        WorldSim::VisualEnvironmentBlueprint VisualEnvironment; // 0x20
        Float32 Visibility; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(WeaponZoomVisualEnvironmentEntityData) == 0x30);
}
#pragma pack(pop)