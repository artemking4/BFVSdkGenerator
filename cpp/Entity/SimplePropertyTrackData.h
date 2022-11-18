// Object: SimplePropertyTrackData
// ClassId: 4540
// RuntimeId: 31922
// TypeInfo: 0x0000000144ED85F0
#include "../Entity/PropertyTrackData.h"
#include "../Entity/InterpolationType.h"

#pragma pack(push, 8)
namespace Entity {
    class SimplePropertyTrackData : public Entity::PropertyTrackData {
        Entity::InterpolationType InterpolationType; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(SimplePropertyTrackData) == 0x30);
}
#pragma pack(pop)