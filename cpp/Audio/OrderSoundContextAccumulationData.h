// Object: OrderSoundContextAccumulationData
// ClassId: 4655
// RuntimeId: 1839
// TypeInfo: 0x0000000144E15C40
#include "../Audio/SoundContextAccumulationData.h"
#include "../Audio/OrderSoundContextAccumulationMode.h"

#pragma pack(push, 8)
namespace Audio {
    class OrderSoundContextAccumulationData : public Audio::SoundContextAccumulationData {
        Audio::OrderSoundContextAccumulationMode Mode; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(OrderSoundContextAccumulationData) == 0x20);
}
#pragma pack(pop)