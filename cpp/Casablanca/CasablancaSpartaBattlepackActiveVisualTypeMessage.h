// Object: CasablancaSpartaBattlepackActiveVisualTypeMessage
// ClassId: 4772
// RuntimeId: 15247
// TypeInfo: 0x0000000144C75130
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaBattlepackActiveVisualTypeMessage : public SpartaShared::SpartaPayload {
        Int32 VisualType; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaBattlepackActiveVisualTypeMessage) == 0x20);
}
#pragma pack(pop)