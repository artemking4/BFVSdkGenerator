// Object: RimeContainerBaseData
// ClassId: 3686
// RuntimeId: 43093
// TypeInfo: 0x0000000144F2B410
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../Entity/GameObjectData.h"

namespace RimeElementsShared {
    class RimeContainerBaseData : public RimeElementsShared::RimeElementBaseData {
        Array<Entity::GameObjectData> Elements; // 0x110
        char pad_0x118[0x8];
    }; // 0x120
    static_assert(sizeof(RimeContainerBaseData) == 0x120);
}