// Object: ColorCorrectionComponent
// ClassId: 5752
// RuntimeId: 24248
// TypeInfo: 0x0000000144EC7DB0
#include "../Entity/Component.h"

namespace WorldSim {
    class ColorCorrectionComponent : public Entity::Component {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ColorCorrectionComponent) == 0x80);
}