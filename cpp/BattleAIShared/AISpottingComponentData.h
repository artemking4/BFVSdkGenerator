// Object: AISpottingComponentData
// ClassId: 1701
// RuntimeId: 26353
// TypeInfo: 0x0000000144C06960
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AISpottingComponentData : public Entity::GameComponentData {
        Float32 SpottingFov; // 0x80
        Float32 SpottingDistance; // 0x84
        Float32 VisorEquipHoldTime; // 0x88
        Int32 VisorWeaponIndex; // 0x8C
        Int32 ForceZoomLevelOnVisorWhenHoldingZoom; // 0x90
        Int32 VisorEquipInput; // 0x94
        Boolean Enabled; // 0x98
        Boolean VisorForceZoom; // 0x99
        char pad_0x9A[0x6];
    }; // 0xA0
    static_assert(sizeof(AISpottingComponentData) == 0xA0);
}
#pragma pack(pop)