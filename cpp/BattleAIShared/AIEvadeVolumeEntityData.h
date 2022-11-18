// Object: AIEvadeVolumeEntityData
// ClassId: 3250
// RuntimeId: 26723
// TypeInfo: 0x0000000144BFEF50
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIEvadeVolumeEntityData : public Entity::SpatialEntityData {
        Core::Vec3 Size; // 0x60
        Core::Vec3 Offset; // 0x70
        Core::Realm Realm; // 0x80
        Float32 EvadeDelay; // 0x84
        Boolean EnableOnInit; // 0x88
        Boolean EnemiesOnly; // 0x89
        Boolean FaceVolumeAfterEvading; // 0x8A
        char pad_0x8B[0x5];
    }; // 0x90
    static_assert(sizeof(AIEvadeVolumeEntityData) == 0x90);
}
#pragma pack(pop)