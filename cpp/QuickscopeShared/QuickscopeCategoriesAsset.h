// Object: QuickscopeCategoriesAsset
// ClassId: 678
// RuntimeId: 63856
// TypeInfo: 0x0000000144F14D80
#include "../Core/Asset.h"
#include "../QuickscopeShared/QuickscopeCategory.h"

#pragma pack(push, 8)
namespace QuickscopeShared {
    class QuickscopeCategoriesAsset : public Core::Asset {
        Array<QuickscopeShared::QuickscopeCategory> Categories; // 0x20
    }; // 0x28
    static_assert(sizeof(QuickscopeCategoriesAsset) == 0x28);
}
#pragma pack(pop)