// Object: CameraActionData
// ClassId: 4317
// RuntimeId: 4534
// TypeInfo: 0x0000000144E8F660
#include "../GameShared/SimpleMovementActionBaseData.h"
#include "../GameShared/CameraMovementActionMode.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraActionData : public GameShared::SimpleMovementActionBaseData {
        GameShared::CameraMovementActionMode ActionMode; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(CameraActionData) == 0x30);
}
#pragma pack(pop)