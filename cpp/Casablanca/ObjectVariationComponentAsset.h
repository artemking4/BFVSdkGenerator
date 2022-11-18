// Object: ObjectVariationComponentAsset
// ClassId: 372
// RuntimeId: 23787
// TypeInfo: 0x0000000144C7E700
#include "../Core/DataContainerPolicyAsset.h"
#include "../Casablanca/ObjectVariationUnlock.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ObjectVariationComponentAsset : public Core::DataContainerPolicyAsset {
        Array<Casablanca::ObjectVariationUnlock> ObjectVariations; // 0x20
    }; // 0x28
    static_assert(sizeof(ObjectVariationComponentAsset) == 0x28);
}
#pragma pack(pop)