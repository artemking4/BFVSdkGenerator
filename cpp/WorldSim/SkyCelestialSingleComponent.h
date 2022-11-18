// Object: SkyCelestialSingleComponent
// ClassId: 6158
// RuntimeId: 31767
// TypeInfo: 0x0000000144EC7030
#include "../Entity/Component.h"

namespace WorldSim {
    class SkyCelestialSingleComponent : public Entity::Component {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(SkyCelestialSingleComponent) == 0x90);
}