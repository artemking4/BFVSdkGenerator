// Object: MaterialBasedEffectEntityData
// ClassId: 2638
// RuntimeId: 51279
// TypeInfo: 0x0000000144DEE220
#include "../DiceShooterShared/DiceVFXEntityBaseData.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../DiceShooterShared/WSNormalAlignment.h"
#include "../Core/LinearTransform.h"
#include "../DiceShooterShared/RaycastEntityResult.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class MaterialBasedEffectEntityData : public DiceShooterShared::DiceVFXEntityBaseData {
        Core::Vec3 RayDirection; // 0x90
        Core::LinearTransform LinkedOffset; // 0xA0
        DiceShooterShared::RaycastEntityResult RaycastResult; // 0xE0
        Entity::MaterialDecl Material; // 0x120
        Float32 ResamplingDistance; // 0x124
        Float32 RayDistance; // 0x128
        DiceShooterShared::WSNormalAlignment NormalAlignment; // 0x12C
        Boolean UseRayCast; // 0x130
        Boolean SpawnEffectOnLookupLocation; // 0x131
        Boolean SeeThrough; // 0x132
        Boolean Penetrable; // 0x133
        Boolean IncludeTerrain; // 0x134
        Boolean InheritEffect; // 0x135
        char pad_0x136[0xA];
    }; // 0x140
    static_assert(sizeof(MaterialBasedEffectEntityData) == 0x140);
}
#pragma pack(pop)