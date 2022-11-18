// Object: AggregatedAwards
// ClassId: 141
// RuntimeId: 22007
// TypeInfo: 0x0000000144D6C430
#include "../Core/Asset.h"
#include "../DicePersistenceShared/AssetReference.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AggregatedAwards : public Core::Asset {
        Array<DicePersistenceShared::AssetReference> RuntimeAwards; // 0x20
        Array<DicePersistenceShared::AssetReference> RuntimeAchievements; // 0x28
    }; // 0x30
    static_assert(sizeof(AggregatedAwards) == 0x30);
}
#pragma pack(pop)