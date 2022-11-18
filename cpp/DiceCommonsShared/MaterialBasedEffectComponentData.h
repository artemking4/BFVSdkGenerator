// Object: MaterialBasedEffectComponentData
// ClassId: 1801
// RuntimeId: 19692
// TypeInfo: 0x0000000144DBBE80
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"
#include "../DiceCommonsShared/SnapType.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"
#include "../EffectBase/EffectParameter.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class MaterialBasedEffectComponentData : public Entity::GameComponentData {
        Core::Vec3 RayDirection; // 0x80
        Float32 OverrideHeight; // 0x90
        Entity::MaterialDecl Material; // 0x94
        DiceCommonsShared::SnapType Snapping; // 0x98
        Float32 RayDistance; // 0x9C
        Int32 MaxInstances; // 0xA0
        char pad_0xA4[0x4];
        Array<EffectBase::EffectParameter> EffectParameters; // 0xA8
        Boolean AutoStart; // 0xB0
        Boolean LocalPlayerOnly; // 0xB1
        Boolean TransformEffectWithComponent; // 0xB2
        Boolean UseRayCast; // 0xB3
        Boolean SpawnEffectOnLookupLocation; // 0xB4
        Boolean SeeThrough; // 0xB5
        Boolean Penetrable; // 0xB6
        Boolean IncludeTerrain; // 0xB7
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(MaterialBasedEffectComponentData) == 0xC0);
}
#pragma pack(pop)