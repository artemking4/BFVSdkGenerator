// Object: AntTrajectoryAlignTransformLayer
// ClassId: 8641
// RuntimeId: 4102
// TypeInfo: 0x0000000144DA8530
#include "../DiceCommons/DiceTransformLayer.h"

namespace DiceCommons {
    class AntTrajectoryAlignTransformLayer : public DiceCommons::DiceTransformLayer {
        char pad_0x68[0x198];
    }; // 0x200
    static_assert(sizeof(AntTrajectoryAlignTransformLayer) == 0x200);
}