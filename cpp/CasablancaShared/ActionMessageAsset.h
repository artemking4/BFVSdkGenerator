// Object: ActionMessageAsset
// ClassId: 286
// RuntimeId: 58884
// TypeInfo: 0x0000000144D6D130
#include "../Core/DataContainerPolicyAsset.h"
#include "../Entity/PropertyChannel.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ActionMessageAsset : public Core::DataContainerPolicyAsset {
        Array<Entity::PropertyChannel> Properties; // 0x20
    }; // 0x28
    static_assert(sizeof(ActionMessageAsset) == 0x28);
}
#pragma pack(pop)