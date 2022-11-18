// Object: ClientUIChatCommunicationEntityData
// ClassId: 2508
// RuntimeId: 35762
// TypeInfo: 0x0000000144D02F20
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientUIChatCommunicationEntityData : public Entity::EntityData {
        CString MessageToSend; // 0x20
        Int32 DebugMessagesToSend; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ClientUIChatCommunicationEntityData) == 0x30);
}
#pragma pack(pop)