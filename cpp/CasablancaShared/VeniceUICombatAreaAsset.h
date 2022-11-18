// Object: VeniceUICombatAreaAsset
// ClassId: 871
// RuntimeId: 5190
// TypeInfo: 0x0000000144D5AC60
#include "../GameShared/UICombatAreaAsset.h"
#include "../CasablancaShared/UIDistanceFieldAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceUICombatAreaAsset : public GameShared::UICombatAreaAsset {
        CasablancaShared::UIDistanceFieldAsset DistanceField; // 0x28
        CasablancaShared::UIDistanceFieldAsset SurroundingDistanceField; // 0x30
    }; // 0x38
    static_assert(sizeof(VeniceUICombatAreaAsset) == 0x38);
}
#pragma pack(pop)