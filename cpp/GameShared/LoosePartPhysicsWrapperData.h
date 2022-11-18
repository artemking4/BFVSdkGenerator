// Object: LoosePartPhysicsWrapperData
// ClassId: 4242
// RuntimeId: 44680
// TypeInfo: 0x0000000144E822C0
#include "../Core/DataContainer.h"
#include "../GameShared/NetworkableLoosePartPhysicsData.h"

#pragma pack(push, 8)
namespace GameShared {
    class LoosePartPhysicsWrapperData : public Core::DataContainer {
        Array<GameShared::NetworkableLoosePartPhysicsData> LoosePartPhysics; // 0x18
    }; // 0x20
    static_assert(sizeof(LoosePartPhysicsWrapperData) == 0x20);
}
#pragma pack(pop)