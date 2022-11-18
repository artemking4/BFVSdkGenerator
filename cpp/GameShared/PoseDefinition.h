// Object: PoseDefinition
// ClassId: 4447
// RuntimeId: 20005
// TypeInfo: 0x0000000144E96630
#include "../Core/DataContainer.h"
#include "../Ant/AntRef.h"
#include "../Global/Float32.h"
#include "../GameShared/PoseTransitionBase.h"

#pragma pack(push, 8)
namespace GameShared {
    class PoseDefinition : public Core::DataContainer {
        Ant::AntRef Animation; // 0x18
        Float32 AnimationDuration; // 0x2C
        Array<GameShared::PoseTransitionBase> Transitions; // 0x30
    }; // 0x38
    static_assert(sizeof(PoseDefinition) == 0x38);
}
#pragma pack(pop)