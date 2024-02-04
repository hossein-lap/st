static const ColorScheme schemes[] = {
//	/* 256_noir {{{ */
	{
		{
			/* 8 normal colors */
			"#000000", /* black   */
			"#ee0000", /* red     */
			"#585855", /* blue    */
			"#AAABA6", /* yellow  */
			"#383833", /* green   */
			"#7a7a77", /* magenta */
			"#D6D6D0", /* cyan    */
			"#ffffff", /* white   */
			/* 8 bright colors */
			"#000000", /* black   */
			"#aa0000", /* red     */
			"#585855", /* blue    */
			"#AAABA6", /* yellow  */
			"#383833", /* green   */
			"#7a7a77", /* magenta */
			"#D6D6D0", /* cyan    */
			"#ffffff", /* white   */
			/* special */
			[257] = "#b7bcba",
			[256] = "#ff7700",
			"#000000",
		},
		7,    /* foreground */
		257,  /* background */
		256,  /* cursor */
		257   /* I have no idea XD */
	},
//	/*}}}*/
// //	/* Onedark {{{ */
// 	{
// 		{
// 			/* 8 normal colors */
// 			"#0e1013", /* black   */
// 			"#e55561", /* red     */
// 			"#8ebd6b", /* green   */
// 			"#e2b86b", /* yellow  */
// 			"#4fa6ed", /* blue    */
// 			"#bf68d9", /* magenta */
// 			"#48b0bd", /* cyan    */
// 			"#abb2bf", /* white   */
// 			/* 8 bright colors */
// 			"#37383d", /* black   */
// 			"#e16d77", /* red     */
// 			"#99bc80", /* green   */
// 			"#dfbe81", /* yellow  */
// 			"#68aee8", /* blue    */
// 			"#c27fd7", /* magenta */
// 			"#5fafb9", /* cyan    */
// 			"#fafafa", /* white   */
// 			/* special */
// 			[256] = "#ff7700",
// 			[257] = "#1f2329"
// 		},
// 		15,   /* foreground */
// 		257,  /* background */
// 		256,  /* cursor */
// 		257   /* I have no idea XD */
// 	},
// //	/*}}}*/
//	/* Dracula {{{ */
	{
		{
			/* 8 normal colors */
			"#21222c", /* black   */
			"#ff5555", /* red     */
			"#50fa7b", /* green   */
			"#f1fa8c", /* yellow  */
//			"#9082f7", /* blue    */
			"#bd93f9", /* blue    */
			"#ff79c6", /* magenta */
			"#8be9fd", /* cyan    */
			"#f8f8f2", /* white   */
			/* 8 bright colors */
			"#6272a4", /* black   */
			"#ff6e6e", /* red     */
			"#69ff94", /* green   */
			"#ffffa5", /* yellow  */
			"#d6acff", /* blue    */
			"#ff92df", /* magenta */
			"#a4ffff", /* cyan    */
			"#ffffff", /* white   */
			// "#d6acff",
			/* special */
			[256] = "#ff7700",
			[257] = "#191A21"
			// [257] = "#282a36"
		},
		15,   /* foreground */
		257,  /* background */
		256,  /* cursor */
		257   /* I have no idea XD */
	},
//	/*}}}*/
//	/* Solarized-dark {{{ */
	{
		{
			/* 8 normal colors */
			"#002b36", /* black   */
			"#dc322f", /* red     */
			"#859900", /* green   */
			"#b58900", /* yellow  */
			"#268bd2", /* blue    */
			"#d33682", /* magenta */
			"#2aa198", /* cyan    */
			"#eee8d5", /* white   */
			/* 8 bright colors */
			"#073642", /* black   */
			"#cb4b16", /* red     */
			"#586e75", /* green   */
			"#657b83", /* yellow  */
			"#839496", /* blue    */
			"#6c71c4", /* magenta */
			"#93a1a1", /* cyan    */
			"#fdf6e3", /* white   */
			/* special */
			[256] = "#ff7700",
			[257] = "#002b36",
		},
		15, /* foreground */
		257, /* background */
		256, /* cursor */
		257  /* I have no idea XD */
	},
//	/*}}}*/
//	/* Ayu-dark {{{ */
	{
		{
			/* 8 normal colors */
			"#01060e", /* black   */
			"#ea6c73", /* red     */
			"#c2d94c", /* green   */
			"#f9af4f", /* yellow  */
			"#53bdfa", /* blue    */
			"#fae994", /* magenta */
			"#90e1c6", /* cyan    */
			"#c7c7c7", /* white   */
			/* 8 bright colors */
			"#11121d", /* black   */
			"#f07178", /* red     */
			"#c2d94c", /* green   */
			"#ffb454", /* yellow  */
			"#59c2ff", /* blue    */
			"#ffee99", /* magenta */
			"#95e6cb", /* cyan    */
			"#ffffff", /* white   */
			/* special */
			[256] = "#ff7700", // foreground
			[257] = "#0b0e14", // background
		},
		15,   /* foreground */
		257,  /* background */
		256,  /* cursor */
		257   /* I have no idea XD */
	},
//	// /* }}} */
//	/* Hybrid {{{ */
	{
		{
			/* 8 normal colors */
			"#282A2E", /* black   */ // "#1d1f22",
			"#A54242", /* red     */ // "#8d2e32",
			"#8C9440", /* green   */ // "#798431",
			"#DE935F", /* yellow  */ // "#e58a50",
			"#5F819D", /* blue    */ // "#4b6b88",
			"#85678F", /* magenta */ // "#6e5079",
			"#5E8D87", /* cyan    */ // "#4d7b74",
			"#707880", /* white   */ // "#5a626a",
			/* 8 bright colors */
			"#373B41", /* black   */ // "#2a2e33",
			"#CC6666", /* red     */ // "#b84d51",
			"#B5BD68", /* green   */ // "#b3bf5a",
			"#F0C674", /* yellow  */ // "#e4b55e",
			"#81A2BE", /* blue    */ // "#6e90b0",
			"#B294BB", /* magenta */ // "#a17eac",
			"#8ABEB7", /* cyan    */ // "#7fbfb4",
			"#C5C8C6", /* white   */ // "#b5b9b6",
			/* special */
			[256] = "#ff7700",
			[257] = "#1D1F21",
		},
		15,   /* foreground */
		257,  /* background */
		256,  /* cursor */
		257   /* I have no idea XD */
	},
//	/*}}}*/
//	/* Nord {{{ */
{
	{
		/* 8 normal colors */
		"#373e4d", /* black   */
		"#94545d", /* red     */
		"#809575", /* green   */
		"#b29e75", /* yellow  */
		"#68809a", /* blue    */
		"#8c738c", /* magenta */
		"#6d96a5", /* cyan    */
		"#aeb3bb", /* white   */
		/* 8 bright colors */
		"#3b4252", /* black   */
		"#bf616a", /* red     */
		"#a3be8c", /* green   */
		"#ebcb8b", /* yellow  */
		"#81a1c1", /* blue    */
		"#b48ead", /* magenta */
		"#88c0d0", /* cyan    */
		"#e5e9f0", /* white   */
		/* special colors */
		[256] = "#ff7700",
		[257] = "#2E3440",
	},
	15,   /* foreground */
	257,  /* background */
	256,  /* cursor */
	257   /* I have no idea XD */
},
//	/* }}} */
//	/* Gruvbox-dark {{{ */
	{
		{
			/* 8 normal colors */
			"#282828", /* black   */
			"#cc241d", /* red     */
			"#98971a", /* green   */
			"#d79921", /* yellow  */
			"#458588", /* blue    */
			"#b16286", /* magenta */
			"#689d6a", /* cyan    */
			"#a89984", /* white   */
			/* 8 bright colors */
			"#928374", /* black   */
			"#fb4934", /* red     */
			"#b8bb26", /* green   */
			"#fabd2f", /* yellow  */
			"#83a598", /* blue    */
			"#d3869b", /* magenta */
			"#8ec07c", /* cyan    */
			"#ebdbb2", /* white   */
			/* special */
			[256] = "#ff7700",
			[257] = "#282828",
		},
		15,  /* foreground */
		257, /* background */
		256, /* cursor */
		257  /* I have no idea XD */
	},
//	/*}}}*/
//	/* Ubuntu {{{ */
{
	{
		/* 8 normal colors */
		"#555753", /* black   */
		"#cc0000", /* red     */
		"#4e9a06", /* green   */
		"#c4a000", /* yellow  */
		"#3465a4", /* blue    */
		"#75507b", /* magenta */
		"#06989a", /* cyan    */
		"#d3d7cf", /* white   */
		/* 8 bright colors */
		"#2e3436", /* black   */
		"#ef2929", /* red     */
		"#8ae234", /* green   */
		"#fce94f", /* yellow  */
		"#729fcf", /* blue    */
		"#ad7fa8", /* magenta */
		"#34e2e2", /* cyan    */
		"#eeeeec", /* white   */
		/* special */
		[256] = "#ff7700",
		[257] = "#300A24"
	},
	15,   /* foreground */
	257,  /* background */
	256,  /* cursor */
	257   /* I have no idea XD */
},
//	/* }}} */
//	/* Default {{{ */
	{
		{
			/* 8 normal colors */
			"black",    /* black   */
			"red3",     /* red     */
			"green3",   /* green   */
			"yellow3",  /* yellow  */
			"blue2",    /* blue    */
			"magenta3", /* magenta */
			"cyan3",    /* cyan    */
			"gray90",   /* white   */
			/* 8 bright colors */
			"gray50",   /* black   */
			"red",      /* red     */
			"green",    /* green   */
			"yellow",   /* yellow  */
			"#5c5cff",  /* blue    */
			"magenta",  /* magenta */
			"cyan",     /* cyan    */
			"white",    /* white   */
			/* special */
			[256] = "#cccccc",
			[257] = "black",
		},
		15,   /* foreground */
		257,  /* background */
		256,  /* cursor */
		257   /* I have no idea XD */
	},
//	/*}}}*/

//	/* Gruvbox-light {{{ */
	{
		{
			/* 8 normal colors */
			/* hard contrast: #f9f5d7 */
			/* soft contrast: #f2e5bc */
			/* def  contrast: #fbf1c7 */
			"#f2e5bc", /* black */
			"#cc241d", /* red     */
			"#98971a", /* green   */
			"#d79921", /* yellow  */
			"#458588", /* blue    */
			"#b16286", /* magenta */
			"#689d6a", /* cyan    */
			"#7c6f64", /* white   */
			/* 8 bright colors */
			"#928374", /* black   */
			"#9d0006", /* red     */
			"#79740e", /* green   */
			"#b57614", /* yellow  */
			"#076678", /* blue    */
			"#8f3f71", /* magenta */
			"#427b58", /* cyan    */
			"#3c3836", /* white   */
			/* special */
			[256] = "#3c3836",
			[257] = "#f9f5d7",
		},
		15,  /* foreground */
		257, /* background */
		256, /* cursor */
		257  /* I have no idea XD */
	},
//	/*}}}*/
};

// // /* Termite {{{ */
// 	{
// 		{
// 			/* 8 normal colors */
// 			"#232323", /* black   */
// 			"#FF0000", /* red     */
// 			"#76B639", /* green   */
// 			"#E1A126", /* yellow  */
// 			"#289CD5", /* blue    */
// 			"#FF2491", /* magenta */
// 			"#0A9B81", /* cyan    */
// 			"#EBEBEB", /* white   */
// 			/* 8 bright colors */
// 			"#000000", /* black   */
// 			"#FF0000", /* red     */
// 			"#97D01A", /* green   */
// 			"#FFA800", /* yellow  */
// 			"#16B1FB", /* blue    */
// 			"#FF2491", /* magenta */
// 			"#0FDCB6", /* cyan    */
// 			"#F8F8F8", /* white   */
// 			/* special */
// 			[256] = "#ff7700",
// 			// [257] = "#000000"
// 			[257] = "#222222"
// 		},
// 		15,   /* foreground */
// 		257,  /* background */
// 		256,  /* cursor */
// 		257   /* I have no idea XD */
// 	},
// //	/*}}}*/
// //	/* Tango {{{ */
// 	{
// 		{
// 			/* 8 normal colors */
// 			"#555753", /* black   */
// 			"#cc0000", /* red     */
// 			"#4e9a06", /* green   */
// 			"#c4a000", /* yellow  */
// 			"#3465a4", /* blue    */
// 			"#75507b", /* magenta */
// 			"#06989a", /* cyan    */
// 			"#d3d7cf", /* white   */
// 			/* 8 bright colors */
// 			"#2e3436", /* black   */
// 			"#ef2929", /* red     */
// 			"#8ae234", /* green   */
// 			"#fce94f", /* yellow  */
// 			"#729fcf", /* blue    */
// 			"#ad7fa8", /* magenta */
// 			"#34e2e2", /* cyan    */
// 			"#eeeeec", /* white   */
// 			/* special */
// 			[256] = "#ff7700",
// 			// [256] = "#eeeeec",
// 			[257] = "#000000"
// 		},
// 		15,   /* foreground */
// 		257,  /* background */
// 		256,  /* cursor */
// 		257   /* I have no idea XD */
// 	},
// //	/* }}} */

////	/* Solarized light {{{ */
//	{
//		{
//			/* 8 normal colors */
//			"#eee8d5", /* black   */
//			"#dc322f", /* red     */
//			"#859900", /* green   */
//			"#b58900", /* yellow  */
//			"#268bd2", /* blue    */
//			"#d33682", /* magenta */
//			"#2aa198", /* cyan    */
//			"#073642", /* white   */
//			/* 8 bright colors */
//			"#fdf6e3", /* black   */
//			"#cb4b16", /* red     */
//			"#93a1a1", /* green   */
//			"#839496", /* yellow  */
//			"#657b83", /* blue    */
//			"#6c71c4", /* magenta */
//			"#586e75", /* cyan    */
//			"#002b36", /* white   */
//			/* special */
//			[256] = "#ff7700",
//			[257] = "#fafafa"
//			// "#002b36"
//		},
//		12,   /* foreground */
//		257,  /* background */
//		256,  /* cursor */
//		257   /* I have no idea XD */
//	},
////	/*}}}*/
