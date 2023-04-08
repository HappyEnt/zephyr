/*
 * Copyright (c) 2017 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_IEEE802154_DW1000_H_
#define ZEPHYR_INCLUDE_DRIVERS_IEEE802154_DW1000_H_

#include <zephyr/device.h>

/**
 * Set the upper 32 bits of the dw1000 timestamp
 * This method should be called just before the invocation of the tx method and from within the same
 thread */
/* void dw1000_set_delayed_tx_short_ts(const struct device *dev, uint32_t short_ts); */

/**
 * Sets the delayed tx and returns the estimated tx ts
 * @param dev The dw1000 device
 * @param uus_delay the delay in uwb microseconds
 * @return estimated tx ts (corrected by antenna delay) */
/* uint64_t dw1000_plan_delayed_tx(const struct device *dev, uint64_t uus_delay); */

/**
 * Set the delay experienced by the antenna during reception
 * @param dev The dw1000 device
 * @param rx_delay_ts The receiver antenna delay in timestamp form */
/* void dw1000_set_antenna_delay_rx(const struct device *dev, uint16_t rx_delay_ts); */

/**
 * Set the delay experienced by the antenna during transmission
 * @param dev The dw1000 device
 * @param tx_delay_ts The transmission antenna delay in timestamp form */
/* void dw1000_set_antenna_delay_tx(const struct device *dev, uint16_t tx_delay_ts); */

/**
 * Returns the receiver antenna delay in timestamp form
 * @param dev The dw1000 device
 * @return The receiver antenna delay in timestamp form */
/* uint16_t dw1000_antenna_delay_rx(const struct device *dev); */

/**
 * Returns the transmission antenna delay in timestamp form
 * @param dev The dw1000 device
 * @return The transmission antenna delay in timestamp form */
/* uint16_t dw1000_antenna_delay_tx(const struct device *dev); */

/**
 * Get the timestamp of the most recent RX frame
 * @param dev The dw1000 device
 * @return The timestamp of the most recent RX frame */
/* uint64_t dw1000_rx_ts(const struct device *dev); */

/**
 * Get the system time
 * @param dev The dw1000 device
 * @return The system time */
/* uint64_t dw1000_system_ts(const struct device *dev); */

/**
 * Get the system time, truncated to 32 bits
 * @param dev The dw1000 device
 * @return The truncated system time
 */
/* uint32_t dw1000_system_short_ts(const struct device *dev); */

/**
 * Convert a timestamp to frequency synthesizer ticks (DW1000 specific)
 * @param ts The timestamp
 * @return The frequency synthesizer ticks
 */
/* uint64_t dw1000_ts_to_fs(uint64_t ts); */

/**
 * Convert frequency synthesizer ticks to a timestamp (DW1000 specific)
 * @param fs The frequency synthesizer ticks
 * @return The timestamp
 */
/* uint64_t dw1000_fs_to_ts(uint64_t fs); */

/**
 * Convert a truncated timestamp to frequency synthesizer ticks (DW1000 specific)
 * @param ts The truncated timestamp
 * @return The frequency synthesizer ticks
 */
/* uint64_t dw1000_short_ts_to_fs(uint32_t ts); */

/**
 * Convert frequency synthesizer ticks to a truncated timestamp (DW1000 specific)
 * @param fs The frequency synthesizer ticks
 * @return The truncated timestamp
 */
/* uint32_t dw1000_fs_to_short_ts(uint64_t fs); */

/**
 * Calculate the actual transmit timestamp
 * @param planned_short_ts The planned short timestamp
 * @param tx_antenna_delay The transmission antenna delay in timestamp form
 * @return The actual transmit timestamp
 */
/* uint64_t dw1000_calculate_actual_tx_ts(uint32_t planned_short_ts, uint16_t tx_antenna_delay); */

/**
 * Configure the frame filter.
 * @param dev The dw1000 device
 * @param ff_enable Enable or disable the frame filter
 * @param ff_type The type of frame filter to set
 */
void dw1000_set_frame_filter(const struct device *dev, bool ff_enable);

/**
 * Read the carrier integrator value
 * @param dev The dw1000 device
 * @return The carrier integrator value
 */
/* int dw1000_readcarrierintegrator(const struct device *dev); */

/**
 * Get the RX clock offset ratio
 * @param dev The dw1000 device
 * @return The RX clock offset ratio
 */
/* float dw1000_rx_clock_ratio_offset(const struct device *dev); */

/**
 * Get the MAC address associated with the dw1000 device
 * @param dev The dw1000 device
 * @return The MAC address associated with the dw1000 device
 */
/* uint8_t *dw1000_get_mac(const struct device *dev); */


#endif /* ZEPHYR_INCLUDE_DRIVERS_IEEE802154_DW1000_H_ */
