// Object: DestructionConnection
// ClassId: 1512
// RuntimeId: 44962
// TypeInfo: 0x0000000144E66940
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../GameShared/DestructionConnection.h"

#pragma pack(push, 8)
namespace GameShared {
    class DestructionConnection : public Core::DataContainer {
        Uint32 PartIndex; // 0x18
        Float32 Delay; // 0x1C
        Array<Uint32> Dependencies; // 0x20
        Array<GameShared::DestructionConnection> ChildConnections; // 0x28
    }; // 0x30
    static_assert(sizeof(DestructionConnection) == 0x30);
}
#pragma pack(pop)