namespace Math
{
	namespace Arithmetic
	{
		namespace Modules
		{
			namespace ConstExpr
			{
				template <typename T> constexpr T pow (T n, T k, T mod = 1e9 + 7)
				{
					return (k == 0) 
									?
										1
									:
										(k == 1)
											?
												n % mod
											:
												(k % 2 == 0)
												?
												(
														(
																pow (n, k / 2) 
															* 
																pow (n, k / 2)
														) 
													% 
														mod
												)
												:
												(
														(
																(n % mod) 
															* 
																(
																		(
																				pow (n, k / 2) 
																			* 
																				pow (n, k / 2)
																		) 
																	% 
																		mod
																)
														) 
													% 
														mod
												);
				}
				template <typename T> constexpr T fact (T n, T mod = 1e9 + 7)
				{
					return (n <= 1) 
						? 
							1
						: 
							(
									(
											(
													fact (n - 1) 
												% 
													mod
											) 
										* 
											(
													n 
												% 
													mod
											)
									) 
								% 
									mod
							);
				}
			}
		}
	}
}
