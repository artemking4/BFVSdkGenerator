// Object: IesProfileAsset
// ClassId: 534
// RuntimeId: 37765
// TypeInfo: 0x0000000144EB50A0
#include "../Core/Asset.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace WorldBase {
    class IesProfileAsset : public Core::Asset {
        ResourceRef SourceResource; // 0x20
    }; // 0x28
    static_assert(sizeof(IesProfileAsset) == 0x28);
}
#pragma pack(pop)