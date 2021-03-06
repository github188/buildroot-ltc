/*
 * arch/arm/mach-realview/include/mach/entry-macro.S
 *
 * Low-level IRQ helper macros for RealView platforms
 *
 * This file is licensed under  the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

/*
		.macro	disable_fiq
		.endm

		.macro  arch_ret_to_user, tmp1, tmp2
		.endm
*/

.macro  get_irqnr_preamble, base, tmp
.endm 

.macro  get_irqnr_and_base, irqnr, irqstat, base, tmp
.endm



