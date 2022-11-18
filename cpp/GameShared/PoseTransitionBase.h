// Object: PoseTransitionBase
// ClassId: 4449
// RuntimeId: 701
// TypeInfo: 0x0000000144E965B0
#include "../Core/DataContainer.h"
#include "../GameShared/PoseDefinition.h"

namespace GameShared {
    class PoseTransitionBase : public Core::DataContainer {
        GameShared::PoseDefinition TransitionTo; // 0x18
    }; // 0x20
    static_assert(sizeof(PoseTransitionBase) == 0x20);
}