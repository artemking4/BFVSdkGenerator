// Object: FilmGrainComponent
// ClassId: 5761
// RuntimeId: 42125
// TypeInfo: 0x0000000144EC77B0
#include "../Entity/Component.h"

namespace WorldSim {
    class FilmGrainComponent : public Entity::Component {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(FilmGrainComponent) == 0x60);
}