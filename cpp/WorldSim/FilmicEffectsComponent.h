// Object: FilmicEffectsComponent
// ClassId: 5762
// RuntimeId: 20242
// TypeInfo: 0x0000000144EC79B0
#include "../Entity/Component.h"

namespace WorldSim {
    class FilmicEffectsComponent : public Entity::Component {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(FilmicEffectsComponent) == 0xC0);
}