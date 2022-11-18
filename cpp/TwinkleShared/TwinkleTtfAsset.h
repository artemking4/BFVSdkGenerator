// Object: TwinkleTtfAsset
// ClassId: 851
// RuntimeId: 43801
// TypeInfo: 0x0000000144F66BD0
#include "../Core/Asset.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleTtfAsset : public Core::Asset {
        ResourceRef FontResource; // 0x20
    }; // 0x28
    static_assert(sizeof(TwinkleTtfAsset) == 0x28);
}
#pragma pack(pop)