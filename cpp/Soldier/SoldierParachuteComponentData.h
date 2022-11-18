// Object: SoldierParachuteComponentData
// ClassId: 1843
// RuntimeId: 36906
// TypeInfo: 0x0000000144F2DC30
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Soldier/SoldierParachuteBinding.h"
#include "../GameShared/AimingConstraintsData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Soldier {
    class SoldierParachuteComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        Soldier::SoldierParachuteBinding Binding; // 0x84
        GameShared::AimingConstraintsData AimingConstraints; // 0x110
        Float32 UndeployTime; // 0x120
        Float32 AutoDeployInitialDelay; // 0x124
        Float32 AutoDeployGroundDistance; // 0x128
        Float32 AutoDeployMinGroundDistance; // 0x12C
        Boolean AimerAttachedToParachuteTransform; // 0x130
        Boolean AutoDeployEnabled; // 0x131
        Boolean ForceAutoDeploy; // 0x132
        Boolean AutoDeployOnceOnSpawnOnly; // 0x133
        char pad_0x134[0xC];
    }; // 0x140
    static_assert(sizeof(SoldierParachuteComponentData) == 0x140);
}
#pragma pack(pop)