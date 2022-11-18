// Object: WallOfDoomEntityData
// ClassId: 3904
// RuntimeId: 58781
// TypeInfo: 0x0000000144F71470
#include "../Entity/EntityData.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../WallOfDoomShared/WallOfDoomHeightmapMetaData.h"
#include "../Render/TextureAsset.h"
#include "../EffectBase/EffectParameter.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace WallOfDoomShared {
    class WallOfDoomEntityData : public Entity::EntityData {
        Entity::ObjectBlueprint WallOfDoomBlueprint; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 Center; // 0x30
        Entity::ObjectBlueprint WallOfDoomBlendBlueprint; // 0x40
        Float32 MeshSegmentLength; // 0x48
        Float32 MeshSegmentHeight; // 0x4C
        Float32 MeshBlendingSegmentLength; // 0x50
        Float32 Radius; // 0x54
        Array<Float32> MinMaxPairs; // 0x58
        WallOfDoomShared::WallOfDoomHeightmapMetaData MetaData; // 0x60
        char pad_0x8C[0x4];
        Render::TextureAsset HeightMap; // 0x90
        Array<EffectBase::EffectParameter> EffectParameters; // 0x98
        Boolean WallVisible; // 0xA0
        Boolean VFXVisible; // 0xA1
        char pad_0xA2[0xE];
    }; // 0xB0
    static_assert(sizeof(WallOfDoomEntityData) == 0xB0);
}
#pragma pack(pop)