// Object: PhysicsResourceContainerAsset
// ClassId: 630
// RuntimeId: 16738
// TypeInfo: 0x0000000144F0DC40
#include "../Core/Asset.h"
#include "../Global/ResourceRef.h"

namespace Physics {
    class PhysicsResourceContainerAsset : public Core::Asset {
        ResourceRef PhysicsResource; // 0x20
    }; // 0x28
    static_assert(sizeof(PhysicsResourceContainerAsset) == 0x28);
}