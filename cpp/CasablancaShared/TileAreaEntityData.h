// Object: TileAreaEntityData
// ClassId: 3575
// RuntimeId: 10809
// TypeInfo: 0x0000000144D227F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/TileAreaConfig.h"

namespace CasablancaShared {
    class TileAreaEntityData : public Entity::EntityData {
        CasablancaShared::TileAreaConfig TileConfig; // 0x20
    }; // 0x50
    static_assert(sizeof(TileAreaEntityData) == 0x50);
}