// Object: MeshEmitterControlEntityData
// ClassId: 2886
// RuntimeId: 62419
// TypeInfo: 0x0000000144E76340
#include "../Entity/EntityData.h"
#include "../EffectBase/MeshEmitterBaseAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class MeshEmitterControlEntityData : public Entity::EntityData {
        EffectBase::MeshEmitterBaseAsset MeshEmitter; // 0x20
    }; // 0x28
    static_assert(sizeof(MeshEmitterControlEntityData) == 0x28);
}
#pragma pack(pop)